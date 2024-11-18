#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int k;
    cin >> k;

    int min_dist = abs(a[0]-k);
    int min_index = 0;

    for(int i = 1; i < n; i ++){
        if(abs(a[i]-k) < min_dist){
            min_dist = abs(a[i] - k);
            min_index = i;
        }
    }

    cout << min_index;

    return 0;
}

/*This is a modification*/
/*one more modification*/
