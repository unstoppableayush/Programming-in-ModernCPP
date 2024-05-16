//writting to output file

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream myfile;     //output stream
    myfile.open("example.txt");     //associate file example.txt to output stream myfile
    myfile << "Writing to this file.\n";  //stream to output
    myfile.close();        //flush stream to file and disconnect from stream
    return 0;
}