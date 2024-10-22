#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Hàm để thêm dấu phân cách phần nghìn
string formatNumber(int num) {
    stringstream ss;
    string result;
    ss << num;
    string str = ss.str();

    int count = 0;
    for (int i = str.length() - 1; i >= 0; --i) {
        result.insert(result.begin(), str[i]);
        count++;
        if (count == 3 && i != 0) {
            result.insert(result.begin(), '.');
            count = 0;
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Nhap mot so (nghin dong): ";
    cin >> n;
    
    // In ra số tiền với dấu chấm và đơn vị vnd
    cout << "So tien: " << formatNumber(n * 1000) << " vnd" << endl;

    return 0;
}
