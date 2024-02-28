#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");

    int n;
    input >> n;

    int inputArr[n];

    for(int i = 0; i < n; i++) {
        input >> inputArr[i];
    }

    int minValue = 9999, maxValue = 0;
    int odd[100], even[100];
    int oddIndex = 0, evenIndex = 0;

    for(int i = 0; i < n; i++) {
        if(minValue > inputArr[i]){
            minValue = inputArr[i];
        }
        if(maxValue < inputArr[i]){
            maxValue = inputArr[i];
        }
        if(inputArr[i] % 2 == 0) {
            even[evenIndex] = inputArr[i];
            evenIndex++;
        } else {
            odd[oddIndex] = inputArr[i];
            oddIndex++;
        }
    }

    output << "Max value: " << maxValue << endl;
    output << "Min value: " << minValue << endl;
    output << "Even array:" << endl;
    for(int i = 0; i < evenIndex; i++) {
        output << even[i] << " ";
    }
    output << endl;
    output << "Odd array:" << endl;
    for(int i = 0; i < oddIndex; i++) {
        output << odd[i] << " ";
    }
    cout << endl;

    return 0;
}
