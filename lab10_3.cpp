#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sst = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sst += (pow(atof(textline.c_str()),2));
        count++;
    }
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/count << "\n";
    cout << "Standard deviation = " << sqrt((((sst)/count))-(pow((sum/count),2)));
}