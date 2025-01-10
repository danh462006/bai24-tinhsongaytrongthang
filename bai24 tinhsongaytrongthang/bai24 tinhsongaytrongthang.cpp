// bai24 tinhsongaytrongthang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int sothang ;
    cout << "tinh so ngay trong thang \n";
    cout << "nhap so thang "; cin >> sothang ;
 
    switch (sothang )
    {
    case 1 :
    case 3 :
    case 5 :
    case 7 :
    case 8 :
    case 10 :
    case 12:
                                    cout << "so ngay trong thang la : 31 ";
                                    break;
    case 2:
                                        cout << " so ngay trong thang la : 28 hoac 29 ";
                                        break;
    case 4:
    case 6:
    case 9:
    case 11:
                                                        cout << "so ngay trong thang la : 30 ";
                                                        break;
                                                    default:
                                                        cout << " khong co thang " << sothang;

                                                        break;
    }

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
