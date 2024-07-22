#include<iostream>
#include<vector>
using namespace std;

string arr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void solve(string digits, string output, int i) {
    //base
    if(i == digits.size()) {
        cout << output << endl;
        return;
    }
    //recurtion
    int dig = digits[i] - '0';
    string temp = arr[dig];
    for(int j = 0; j < temp.size(); j++) {
        output.push_back(temp[j]);
        solve(digits, output, i + 1);
        output.pop_back();
    }
}

int main() {
    string digits = "23";
    solve(digits, "", 0);
    return 0;
}