#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    
int count = 0;
float sum = 0.0;
float sum_of_square = 0.0;
string textline;
ifstream source("score.txt");

while (getline(source, textline)) {
    
    sum += stof(textline);
    sum_of_square += pow(stof(textline),2);
    count++;
    
}

    cout << "Number of data = "<< count <<endl;
    cout << setprecision(3);
    cout << "Mean = "<< sum / count<<endl;
    cout << "Standard deviation = "<< sqrt((sum_of_square / count) - pow(sum / count,2));

}