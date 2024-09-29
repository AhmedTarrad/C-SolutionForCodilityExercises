
int solution(int X, int Y, int D) {
// Implement your solution here
	int deltaToTarget{Y - X};
	int numJumps{deltaToTarget / D};
	if(deltaToTarget % D)
	{
		numJumps++;
	}
	return numJumps;
}