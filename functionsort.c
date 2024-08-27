#include<stdio.h>


int fun(int a,int b){
	return a>b; 
}



void sort(int arr[],int n,int (*comp) (int ,int )){

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n-i-1; j++) {
			if(fun(arr[j],arr[j+1])) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
}	


void printarr(int arr[],int n){

	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}

	printf("\n");

}

int main(){

	int arr[]={3,4,2,1};

	sort(arr,4,fun);

	printarr(arr,4);
}


