//
//  main.cpp
//  filesmkr
//
//  Created by Діана on 10.05.2022.
//

#include <iostream>
#include <fstream>
using namespace std;
struct Ball{
    string x;
    int y;
};
int main() {
    string filenameTXT = "/Users/dianagr/Documents/filesmkr/filesmkr/file.txt";
    string filenameB = "/Users/dianagr/Documents/filesmkr/filesmkr/file.dat";
    ofstream file1(filenameTXT);
    string line = " ";
    if(!file1.is_open()){
        cout<<"Cannot open file";
        return 0;
    }
    while(line!=""){
        cout<<"Enter line";
        getline(cin, line);
        file1<<line<<endl;
    }
    cout<<"End"<<endl;
    file1.close();
    ifstream file2(filenameTXT);
    if(!file2.is_open()){
        cout<<"Cannot open file";
        return 0;
    }

    string str;
    while(!file2.eof()){
        getline(file2, str, ' ');
        cout<<str<<endl;
    }
    file2.close();
    
    Ball ball[3];
    ball[0].x = "3";
    ball[0].y = 1;
    ball[1].x = "4";
    ball[1].y = 6;
    ball[2].x = "8";
    ball[2].y = 9;
    ofstream fileB(filenameB, ios::binary);
    for(int i=0; i<3; i++){
        fileB.write((char*)&ball[i], sizeof(Ball));
    }
    fileB.close();
    ifstream fileB2(filenameB, ios::binary);
    int j = 0;
    Ball ball1;
    while(fileB2.read((char*)&ball1, sizeof(Ball))){
        cout<<j<<" : "<<ball1.x<<"  "<<ball1.y<<endl;
        j++;
    }
    fileB2.close();
    return 0;
}
