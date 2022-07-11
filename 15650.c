
#include <stdio.h>
int N, M;
int check[8]; 
int temp[8] = { NULL, };
void result(int num,int count);

int main()
{
	scanf_s("%d %d", &N, &M);
	result(0,0);
}

void result(int num,int count)
{
	if (count == M) 
	{
		
		for (int i = 0; i < M; i++) // 한 줄에 총 M개 만큼 출력해준다
		{
			//if (check[i] > check[i + 1])
				//continue;

			printf("%d ", check[i]); //check 배열에 넣어둔 수 출력
		}
		printf("\n");
		return;
	}
	for(int i= num; i< N ; i++) // 더 낮은숫자를 돌지 않기 위해 num 을 추가해줌.
		if (temp[i]==NULL) //만약 i번째를 들렸다면 다시 i번째에 들리지 않는다.
		{
			temp[i] = 1; // 현재 들렸던 곳을 표시하기위해 1 로 바꿔준다.
			check[count] = i + 1; // count번째 수를 i +1 로 만든다. 1부터 출력하기때문에 +1 을 더해줌
			result(i+1 ,count + 1); //i+1 을 해줌으로 더 낮은 숫자를 돌지 않는다. 다음 수를 정하러 재귀
			temp[i] = NULL; // count 까지 전부 들렸으면 i 를 다시 들릴수 있게 원상태로 복귀.
		}
}
