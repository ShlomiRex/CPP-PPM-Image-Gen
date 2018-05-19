#include <iostream>
#include <fstream>
#include <cmath>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    ofstream imageFile2("testimage.ppm", ios::out | ios::binary);
    imageFile2 << "P1" << endl; //Header
    imageFile2 << 6 << " " << 10 << endl; //Diameter
    //Pixels (Black, white)
    imageFile2 << "0 0 0 0 1 0\n0 0 0 0 1 0\n0 0 0 0 1 0\n0 0 0 0 1 0\n0 0 0 0 1 0\n0 0 0 0 1 0\n1 0 0 0 1 0\n0 1 1 1 0 0\n0 0 0 0 0 0\n0 0 0 0 0 0";

    return 0;










    
    for(int k = 0; k < 100; k++) {
        const int dimx = 800, dimy = 800;
        ofstream imageFile("myimage.ppm", ios::out | ios::binary);
        imageFile << "P6" << endl << dimx << " " << dimy << endl << 255 << endl;
        for (int j = 0; j < dimy; ++j)
        {
            for (int i = 0; i < dimx; ++i)
            {
                char color[3];
                color[0] = j * k % 256;                             /* red */
                color[1] = i % 256;                    /* green */
                color[2] = int(  sin(i/5) * cos(j/5)  ) % 256; /* blue */
                imageFile << color[0] << color[1] << color[2];
            }
        }
        imageFile.close();
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    return 0;
}