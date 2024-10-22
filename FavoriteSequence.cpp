#include <iostream>
using namespace std;

int main() {
    int t;  
    cin >> t;
    
    while (t--) {
        int n;  
        cin >> n;
        
        int b[n];  
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        
        int left = 0, right = n - 1;  
        bool toLeft = true;
        
        while (left <= right) {
            if (toLeft) {
                cout << b[left++] << " "; 
            } else {
                cout << b[right--] << " ";  
            }
            toLeft = !toLeft; 
        }
        cout << endl;  
    }
    return 0;
}
