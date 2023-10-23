#include <iostream>
using namespace std;

void L1Q2()
{
    cout << "Calculate the area of the walls and the floor of the room"
    "\nEnter the Length(X), Width(Z) and the Height(Y): ";
    float roomZ, roomX, roomY, floorXZ, wallYZ, wallYX;
    cin >> roomZ >> roomX >> roomY;
    //region calculating
    floorXZ = roomX * roomZ;
    wallYZ = roomY * roomZ;
    wallYX = roomY * roomX;
    //region answer
    cout << "\n\nEnter the values X, Y, Z of the room" <<
        
        "\n\tWall Area(X, Y) = " << wallYX <<
        "\n\tWall Area(Z, Y) = " << wallYZ <<

        "\n\n\tFloor Area(X, Z) = " << floorXZ <<
        "\n\tArea of All Walls = " << (wallYX + wallYZ) * 2;
}