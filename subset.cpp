// CPP program for brute force 
// approach of SumOverSubsets DP 
#include <bits/stdc++.h> 
using namespace std; 

// function to print the sum over subsets value 
void SumOverSubsets(int a[], int n) { 

// array to store the SumOverSubsets 
int sos[1 << n] = {0}; 

// iterate for all possible x 
for (int x = 0; x < (1 << n); x++) { 

	// iterate for all possible bitwise subsets 
	for (int i = 0; i < (1 << n); i++) { 

	// if i is a bitwise subset of x 
	if ((x & i) == i) 
		sos[x] += a[i]; 
	} 
} 

// printa all the subsets 
for (int i = 0; i < (1 << n); i++) 
	cout << sos[i] << " "; 
} 

// Driver Code 
int main() { 
int a[] = {7, 12, 14, 16}; 
int n = 2; 
SumOverSubsets(a, n); 
return 0; 
} 
