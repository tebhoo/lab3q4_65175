#include <stdbool.h>
int main() {
	int ans = 0;
	bool pNum = true;
	while(pNum){
		int a;
		printf("enter number : ");
		scanf("%d", &a);
		if(a>0){
			ans = ans + a;
		} else {
			printf("summation = %d\n", ans);
			pNum = false;
		}
	}
	return 0;
}
