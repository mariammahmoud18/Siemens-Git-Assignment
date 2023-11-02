lude <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getSum(vector<int> numbers)
{
	    int vectorSum = 0;

	    for(int index = 0; index < numbers.size(); index++)
            {
		    vectorSum += numbers[index];
	    }

	    return vectorSum;
}

int main()
{
	    vector<int> testVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	    cout<< getSum(testVector)<<endl;
		   
	    return 0;
}
