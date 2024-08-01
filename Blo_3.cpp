#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string s;
    ofstream ofs("A:\\h8.txt");
    int pos;
    pos = ofs.tellp();
    cout<<"Current Cursor's Postion (pos) = "<<pos<<endl;
    ofs<<"This Is The Example Of File Handling Concept";
    ofs.seekp(10,ios::cur);
    ofs.close();
    ifstream ifs("A://h8.txt");
    int curpos;
    curpos = ifs.tellg();
    cout<<"Current Cursor's Postion = "<<curpos<<endl;
    ifs.seekg(5,ios::beg);
    while (getline(ifs,s))
    {
        cout<<s;
    }
    ifs.close();
}