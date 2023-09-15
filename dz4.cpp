#include <iostream>
#include <string>
using namespace std;

class Cat {
private:
    double tail_length = 0.5; // m
    int ears_count = 2;
    string fur_color = "white";
    string nick = "Snowflake";
    string eyes_color = "blue";
    bool is_alive = true;
    bool is_hungry = true;

public:
    // Getters
    double GetTailLength() const {
        return tail_length;
    }

    int GetEarsCount() const {
        return ears_count;
    }

    string GetFurColor() const {
        return fur_color;
    }

    string GetNick() const {
        return nick;
    }

    string GetEyesColor() const {
        return eyes_color;
    }

    bool IsAlive() const {
        return is_alive;
    }

    bool IsHungry() const {
        return is_hungry;
    }

    // Setters
    void SetTailLength(double length) {
        tail_length = length;
    }

    void SetEarsCount(int count) {
        ears_count = count;
    }

    void SetFurColor(const string& color) {
        fur_color = color;
    }

    void SetNick(const string& nickname) {
        nick = nickname;
    }

    void SetEyesColor(const string& color) {
        eyes_color = color;
    }

    void SetAlive(bool alive) {
        is_alive = alive;
    }

    void SetHungry(bool hungry) {
        is_hungry = hungry;
    }

    public:
    void MakeNoize() {
        if (is_alive) {
            cout << "MEOW!\n";
        }
        else {
            cout << "The cat is not alive.\n";
        }
    }

    void Walk() {
        if (is_alive) {
            cout << "The cat is walking!\n";
        }
        else {
            cout << "The cat is not alive.\n";
        }
    }

    void Eat(string meal) {
        if (is_alive) {
            if (is_hungry) {
                cout << "The cat is eating " << meal << "\n";
                is_hungry = false;
            }
            else {
                cout << "The cat is not hungry.\n";
            }
        }
        else {
            cout << "The cat is not alive.\n";
        }
    }

    void Jump() {
        if (is_alive) {
            cout << "Jumped out of the window\n\n";
        }
        else {
            cout << "The cat is not alive.\n";
        }
    }
};

class Human {
private:
    double height = 1.72; // M
    int arms_count = 2;
    int legs_count = 2;
    string hair_color = "pink";
    string eyes_colour = "blue";
    bool is_alive = true;
    bool is_tired = false;

public:
    // Getters
    double GetHeight() const {
        return height;
    }

    int GetArmsCount() const {
        return arms_count;
    }

    int GetLegsCount() const {
        return legs_count;
    }

    string GetHairColor() const {
        return hair_color;
    }

    string GetEyesColour() const {
        return eyes_colour;
    }

    bool IsAlive() const {
        return is_alive;
    }

    bool IsTired() const {
        return is_tired;
    }

    // Setters
    void SetHeight(double h) {
        height = h;
    }

    void SetArmsCount(int count) {
        arms_count = count;
    }

    void SetLegsCount(int count) {
        legs_count = count;
    }

    void SetHairColor(const string& color) {
        hair_color = color;
    }

    void SetEyesColour(const string& color) {
        eyes_colour = color;
    }

    void SetAlive(bool alive) {
        is_alive = alive;
    }

    void SetTired(bool tired) {
        is_tired = tired;
    }

public:
    void Talk() {
        if (is_alive) {
            cout << "Hello\n\n";
        }
        else {
            cout << "The human is not alive.\n";
        }
    }

    void Sleep() {
        if (is_alive) {
            if (!is_tired) {
                cout << "zzzz\n";
                is_tired = true;
            }
            else {
                cout << "The human does not want to sleep.\n";
            }
        }
        else {
            cout << "The human is not alive.\n";
        }
    }

    void Work() {
        if (is_alive) {
            cout << "Working\n\n";
        }
        else {
            cout << "The human is not alive.\n";
        }
    }

    void Cook() {
        if (is_alive) {
            cout << "Cooking an omelette\n";
        }
        else {
            cout << "The human is not alive.\n";
        }
    }

    void Eat() {
        if (is_alive) {
            cout << "Eating an omelette\n";
        }
        else {
            cout << "The human is not alive.\n";
        }
    }

    void Printing() {
        if (is_alive) {
            cout << "Pulling a sheet from the printer\n\n";
        }
        else {
            cout << "The human is not alive.\n";
        }
    }

    void Pet(Cat& who) {
        if (is_alive && who.is_alive) {
            cout << "Petting the cat\n";
            who.MakeNoize();
        }
        else {
            cout << "The human or the cat is not alive.\n";
        }
    }
};

class Room {
private:
    double square = 32; // m^2
    int bed = 2;
    string wall_color = "black";
    int windows = 3;
    int table = 1;
    bool is_dark = false;

public:
    // Getters
    double GetSquare() const {
        return square;
    }

    int GetBed() const {
        return bed;
    }

    string GetWallColor() const {
        return wall_color;
    }

    int GetWindows() const {
        return windows;
    }

    int GetTable() const {
        return table;
    }

    bool IsDark() const {
        return is_dark;
    }

    // Setters
    void SetSquare(double s) {
        square = s;
    }

    void SetBed(int b) {
        bed = b;
    }

    void SetWallColor(const string& color) {
        wall_color = color;
    }

    void SetWindows(int w) {
        windows = w;
    }

    void SetTable(int t) {
        table = t;
    }

    void SetIsDark(bool dark) {
        is_dark = dark;
    }

public:
    void Rest() {
        if (is_dark) {
            cout << "Sleeping in the darkness\n";
        }
        else {
            cout << "Resting\n";
        }
    }

    void Party() {
        if (!is_dark) {
            cout << "Dancing\n";
        }
        else {
            cout << "It's too dark to dance\n";
        }
    }

    void PlayPC() {
        if (!is_dark) {
            cout << "Playing on the computer\n";
        }
        else {
            cout << "It's too dark to see the screen\n";
        }
    }

    void TurnLightOff() {
        cout << "Turning off the lights\n";
        is_dark = true;
    }

    void Jump(Cat& who) {
        if (who.is_alive) {
            cout << "The window is open\n";
            who.Jump();
        }
        else {
            cout << "The cat is not alive.\n";
        }
    }
};

class Phone {
private:
    int screen_diagonal = 12;
    int weight = 0.5;
    string color = "grey";
    int power_button = 1;
    int volume_button = 2;

public:
    // Getters
    int GetScreenDiagonal() const {
        return screen_diagonal;
    }

    int GetWeight() const {
        return weight;
    }

    string GetColor() const {
        return color;
    }

    int GetPowerButton() const {
        return power_button;
    }

    int GetVolumeButton() const {
        return volume_button;
    }

    // Setters
    void SetScreenDiagonal(int diagonal) {
        screen_diagonal = diagonal;
    }

    void SetWeight(int w) {
        weight = w;
    }

    void SetColor(const string& c) {
        color = c;
    }

    void SetPowerButton(int pb) {
        power_button = pb;
    }

    void SetVolumeButton(int vb) {
        volume_button = vb;
    }

public:
    void Call(Human& who) {
        cout << "Calling someone\n";
        who.Talk();
    }

    void SurfInternet() {
        cout << "Browsing the Internet - nothing interesting\n";
    }

    void TikTok() {
        cout << "Scrolling through TikTok - killing time\n";
    }

    void Games() {
        cout << "Playing games - also killing time\n";
    }

    void Telegram() {
        cout << "Communicating on Telegram\n";
    }
};

class Table {
private:
    double height = 1.50; // m
    double length = 3.50; // m
    string color = "yellow";
    double weight = 70; // kg
    int pc_on_table = 1;

public:
    // Getters
    double GetHeight() const {
        return height;
    }

    double GetLength() const {
        return length;
    }

    string GetColor() const {
        return color;
    }

    double GetWeight() const {
        return weight;
    }

    int GetPCOnTable() const {
        return pc_on_table;
    }

    // Setters
    void SetHeight(double h) {
        height = h;
    }

    void SetLength(double l) {
        length = l;
    }

    void SetColor(const string& c) {
        color = c;
    }

    void SetWeight(double w) {
        weight = w;
    }

    void SetPCOnTable(int pc) {
        pc_on_table = pc;
    }

public:
    void PlayPC() {
        if (pc_on_table == 1) {
            cout << "Playing on the computer\n";
        }
        else {
            cout << "There's no computer on the table\n";
        }
    }

    void Remove(Human& who) {
        cout << "Clearing away unnecessary things\n";
        who.Work();
    }

    void Move() {
        cout << "Moving the table to the right\n";
    }

    void Break() {
        cout << "Breaking the table\n";
    }

    void Repair() {
        cout << "Repairing the broken table\n";
    }
};

class Printer {
private:
    string form = "square";
    string color = "gray";
    int stickers_count = 14;
    int cables_count = 2;
    int papers_in_printer = 0;
    bool is_jammed = false;

public:
    // Getters
    string GetForm() const {
        return form;
    }

    string GetColor() const {
        return color;
    }

    int GetStickersCount() const {
        return stickers_count;
    }

    int GetCablesCount() const {
        return cables_count;
    }

    int GetPapersInPrinter() const {
        return papers_in_printer;
    }

    bool IsJammed() const {
        return is_jammed;
    }

    // Setters
    void SetForm(const string& f) {
        form = f;
    }

    void SetColor(const string& c) {
        color = c;
    }

    void SetStickersCount(int count) {
        stickers_count = count;
    }

    void SetCablesCount(int count) {
        cables_count = count;
    }

    void SetPapersInPrinter(int count) {
        papers_in_printer = count;
    }

    void SetIsJammed(bool jammed) {
        is_jammed = jammed;
    }

public:
    void Print(Human& who) {
        if (!is_jammed) {
            cout << "Printing...\n";
            who.Printing();
        }
        else {
            cout << "The printer jammed the paper\n";
        }
    }

    void Scan() {
        cout << "Scanning documents\n";
    }

    void Jam() {
        cout << "The printer jammed the paper\n";
        is_jammed = true;
    }

    void Sit() {
        cout << "The cat is sitting on the printer\n";
    }

    void Error() {
        cout << "The printer is broken\n";
    }
};

int main() {
    Cat c;
    Human h;
    Room r;
    Phone p;
    Table t;
    Printer pr;

    c.Eat("fish");
    c.Walk();
    c.Jump();
    c.Eat("mouse");

    h.Sleep();
    h.Work();
    h.Cook();
    h.Eat();
    h.Pet(c);

    r.Rest();
    r.TurnLightOff();
    r.Rest();
    r.Party();
    r.PlayPC();
    r.Jump(c);

    p.Call(h);
    p.SurfInternet();
    p.TikTok();
    p.Games();
    p.Telegram();

    t.PlayPC();
    t.Remove(h);
    t.Move();
    t.Break();
    t.Repair();

    pr.Print(h);
    pr.Scan();
    pr.Jam();
    pr.Sit();
    pr.Error();

    return 0;
}
