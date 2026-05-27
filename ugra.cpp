#include <iostream>
#include <string> 
using namespace std;
class Location {
    public:
    int id;
    bool open;
    string map[11]; 
    int access;
    int puzzle; 
};




int main (void) {
string ready;
Location first;
first.id = 1;
first.open = true;
Location middle;
middle.id = 2;
middle.open = false;
Location end;
end.id = 3;
end.open = false;

// ASCII КАРТЫ ЛОКАЦИЙ
first.map[0] = "--------Стартовая локация--------";
first.map[1] = "###########";
first.map[2] = "#@....#...#";
first.map[3] = "#.....#...#";
first.map[4] = "#..C..#...#";
first.map[5] = "#.........#";
first.map[6] = "#######...#";
first.map[7] = "#.....N...#";
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
middle.map[6] = "#C.....#..#";
middle.map[7] = "#.####.#..#";
middle.map[8] = "#....N.#..#";
middle.map[9] = "#....D....#";
middle.map[10] = "###########";
///////////////////////////////////////////////////
end.map[0] = "--------последняя локация--------";
end.map[1] = "###########";
end.map[2] = "#@...#...D#";
end.map[3] = "#..#.#....#";
end.map[4] = "#..#.#.C..#";
end.map[5] = "#..#.#....#";
end.map[6] = "#..#...#..#";
end.map[7] = "#....N.#..#";
end.map[8] = "#.........#";
end.map[9] = "#.........#";
end.map[10] = "###########";
//////////////////////////////////////////////////



    cout << "начать игру?\n";
    cin >> ready;
if (ready == "да") {
    cout <<"начинаем";
}
else if (ready == "нет") {
    cout << "тогда в другой раз";
return 0;
}













    return 0;
}