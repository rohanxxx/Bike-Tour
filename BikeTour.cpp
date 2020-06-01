#include <iostream>
#include <algorithm>
using namespace std;

int const SIZE = 100;
int arr[SIZE];

int peaks(int check_points);

int main()
{ 
    int tc, t, n;
    t = 0;
    n = 0;

    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        cin >> n;
      
        tc = 0;
        tc = peaks(n);
        
        cout << "Case #" << i << ": " << tc << endl;
    }

    return 0;
}

int peaks(int check_points)
{
    int startingPeak = 0;
    int highest_peak = 0;
    int tc = 0;

    for(int i = 0; i < check_points; i++)
        cin >> arr[i];

    for(int i = 1; i < check_points-1; i++)
    {
        if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1]))
            tc++;
    }
    
    return tc;
}