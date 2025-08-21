// binarySearch

#include<bits/stdc++.h>
using namespace std;


void binarySearch(int array[], int arraySize, int elementTosearch) {

	int middleEement = arraySize/2;

	if(elementTosearch==array[middleEement]) {
		cout<<"found at "<< middleEement;
	}


	else if(elementTosearch>array[middleEement]) {
		for (int a= middleEement+1 ; a<arraySize; a++) {
			if(array[a]==elementTosearch) {
				cout<<"found " <<elementTosearch<<" at "<<a;

			}

		}
	}

	else if(elementTosearch<array[middleEement]) {
		for (int a=0 ; a<middleEement; a++) {
			if(array[a]==elementTosearch) {
				cout<<"found " <<elementTosearch<<" at "<<a;

			}

		}

	}

}




int main() {
	int array[]= {2,4,5,6,7,
	              9,11,13,16,18
	             };
	int elementTosearch = 18;
	int arraySize=sizeof(array)/sizeof(array[0]);

	binarySearch(array, arraySize, elementTosearch);
	return 0;
}