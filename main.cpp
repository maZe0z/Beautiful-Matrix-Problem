#include <iostream>
using namespace std;


int main() {
    int x_of_value, y_of_value,result;
    int value;
    for (int i=1;i<=5;i++){
        for (int j=1;j<=5;j++) {
            cin >> value;
            if (value==1){
                x_of_value=j;
                y_of_value=i;
            }
        }
    }
    result = abs(3-x_of_value)+abs(3-y_of_value);
    cout << result;
    return 0;
}