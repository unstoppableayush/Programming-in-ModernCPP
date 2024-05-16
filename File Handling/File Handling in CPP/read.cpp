#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream myfile("example.txt");     //input buffer
    string line;

    if(myfile.is_open()){       //associate file example.txt to input stream myfile
        while(getline(myfile, line))        //unformatted read: get by line from stream
            cout<<line<<'\n';
        myfile.close();         //disconnect file from stream
    }
    else{
        cout<< "Unable to open file";
    }
    return 0;
}
