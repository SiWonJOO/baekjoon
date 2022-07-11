#include <stdio.h>
int N, M;
int check[8]; 
int temp[8] = { NULL, };
void result(int count);

int main()
{

	scanf_s("%d %d", &N, &M);
	result(0);


}

void result(int count)
{
	if (count == M)
	{
		for (int i = 0; i < M; i++) // 한 줄에 총 M개 만큼 출력해준다
		{
			printf("%d ", check[i]); //check 배열에 넣어둔 수 출력
		}
		printf("\n");
		return;
	}
	for (int i = 0; i < N; i++)
	{
		//if (temp[i] == NULL) 이것만 없애면 처음 들렸던 i를 다시 들린다.
	
		temp[i] = 1; // 현재 들렸던 곳을 표시하기위해 1 로 바꿔준다.
		check[count] = i + 1; // count번째 수를 i +1 로 만든다. 1부터 출력하기때문에 +1 을 더해줌
		result(count + 1); // 다음 수를 정하러 재귀
		temp[i] = NULL; // count 까지 전부 들렸으면 i 를 다시 들릴수 있게 원상태로 복귀.

	}
}
