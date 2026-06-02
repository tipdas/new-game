#include <iostream>
#include <string> 
using namespace std;
bool work_Puzzle_int(string text, int idea) {
    int answer;
         cout << text << endl;  
     cin >> answer;
if ( answer == idea ) {
    return true;
}
return false;
}

bool work_puzzle_string(string text, string idea) {
    string answer;
         cout << text << endl;
     cin >> answer;    
if ( answer == idea ) {
    return true;
}
return false;

}

void see_location(string a[11]) {
   for(int i = 0;i <11; i++)
    cout << a[i] <<endl;

}
  

int transite_result (int start_id, int finish_id,bool open, int access) {
if (open == true && access == finish_id ) {
    return finish_id;
}
if (open == false) {
    cout <<"перейти не получилось.. " << "нужно решить головоломку" << endl;
}

return start_id;
}
class Puzzle_int {
    public:
    int idea;
    string question;

};

class Puzzle_string {
    public:
    string idea;
    string question;

};


class Location {
    public:
    string name;
    int id;
    bool open;
    string map[11]; 
    int access;
 
};
class Igrok {
 public:
 int current_loc;

};


int main (void) {
// Переменные перехода
    string transite_ready;            // готов ли игрок к переходу
    bool transite_checkpoint = true;  // игрок зашел в дверь
// СОСТОЯНИЕ ИГРОКА 
Igrok player;
player.current_loc = 1; //id локации местоположения игрока


// СОСТОЯНИЕ ЛОКАЦИЙ    
string ready;
Location first;
first.name = "ворота стражника";
first.id = 1;
first.open = true;
first.access = 2;
Location middle;
middle.name = "гостевой зал";
middle.id = 2;
middle.open = false;
middle.access = 3;
Location end;
end.name = "комната сокровищ";
end.id = 3;
end.open = false;

////////////////////////////////////////////


// ГОЛОВОЛОМКИ ЛОКАЦИЙ 

Puzzle_string two;
two.idea = "да";
two.question ="на двери написано: на дне океана живет спанч боб? для того чтобы открыть дверь нужно вписать ответ";

Puzzle_int three;
three.idea = 10;
three.question ="на двери написан пример: 5+5. для того чтобы открыть дверь нужно вписать ответ";



// ASCII КАРТЫ ЛОКАЦИЙ
first.map[0] = "--------Стартовая локация--------";
first.map[1] = "###########";
first.map[2] = "#@....#...#";
first.map[3] = "#.....#...#";
first.map[4] = "#.....#...#";
first.map[5] = "#.........#";
first.map[6] = "#######...#";
first.map[7] = "#.........#";
first.map[8] = "#.........#";
first.map[9] = "#.......D.#";
first.map[10] = "###########";
///////////////////////////////////////////////////
middle.map[0] = "--------Средняя локация--------";
middle.map[1] = "###########";
middle.map[2] = "#@........#";
middle.map[3] = "#.######..#";
middle.map[4] = "#......#..#";
middle.map[5] = "######.#..#";
middle.map[6] = "#......#..#";
middle.map[7] = "#.####.#..#";
middle.map[8] = "#......#..#";
middle.map[9] = "#....D....#";
middle.map[10] = "###########";
///////////////////////////////////////////////////
end.map[0] = "--------последняя локация--------";
end.map[1] = "###########";
end.map[2] = "#@...#...D#";
end.map[3] = "#..#.#....#";
end.map[4] = "#..#.#....#";
end.map[5] = "#..#.#....#";
end.map[6] = "#..#...#..#";
end.map[7] = "#......#..#";
end.map[8] = "#.........#";
end.map[9] = "#.........#";
end.map[10] = "###########";
//////////////////////////////////////////////////



    cout << "начать игру?\n";
    cin >> ready;
if (ready == "да") {
    cout <<"начинаем" << endl;
}
else if (ready == "нет") {
    cout << "тогда в другой раз";
return 0;
}
if ( player.current_loc == 1 ) {
    see_location(first.map);
}
if (transite_checkpoint == true) {
middle.open = work_puzzle_string(two.question, two.idea);       
}

if (transite_checkpoint == true) {
 cout << "Вы готовы перейти с локации " << first.name << " на локацию " << middle.name << "?"  <<endl;

}
cin >> transite_ready;
if (transite_ready == "да") {
player.current_loc = transite_result(first.id, middle.id, middle.open, first.access);
// transite_checkpoint = false;

}
if ( player.current_loc == 2 ) {
     see_location(middle.map);
}

if (transite_checkpoint == true) {
end.open = work_Puzzle_int(three.question, three.idea);       
}

if (transite_checkpoint == true) {
 cout << "Вы готовы перейти с локации " << middle.name << " на локацию " << end.name << "?"  <<endl;
}
cin >> transite_ready;
if (transite_ready == "да") {
player.current_loc = transite_result(middle.id, end.id, end.open, middle.access);
// transite_checkpoint = false;
}







    return 0;
}