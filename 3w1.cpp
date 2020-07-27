/* 
Repeat and Missing Number

Input: arr[] = {3, 1, 3}
Output: Missing = 2, Repeating = 3
Explanation: In the array, 
2 is missing and 3 occurs twice 
*/

void printTwoElements(int arr[], int size) 
{ 
    int i; 
    cout << " The repeating element is "; 
  
    for (i = 0; i < size; i++) { 
        if (arr[abs(arr[i]) - 1] > 0) 
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1]; 
        else
            cout << abs(arr[i]) << "\n"; 
    } 
  
    cout << "and the missing element is "; 
    for (i = 0; i < size; i++) { 
        if (arr[i] > 0) 
            cout << (i + 1); 
    } 
} 
