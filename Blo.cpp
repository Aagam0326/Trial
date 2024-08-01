#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream ofs("A:\\h8.txt");
    ofs<<"This Is The Example Of File Handling Concept";
    ofs.close();
    ifstream ifs("A://h8.txt");
    int curpos;
    curpos = ifs.tellg();
    cout<<"Current Cursor Is Bytepostion ="<<curpos<<endl;
    curpos = curpos + 10;
    cout<<"Updated Cursor Position ="<<curpos;
}