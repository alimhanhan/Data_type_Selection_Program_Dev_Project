#include <stdio.h>

int main()
{
	int age, id, manu;
	double stars;
	char word;

	printf("���̸� �Է��Ͻÿ�: ");
	scanf_s("%d", &age);
	printf("����: %d\n", age);

	printf("���� ���̵� �Է��Ͻÿ�: ");
	scanf_s("%d", &id);
	printf("���̵�: %d\n", id);

	printf("���귮�� �Է��Ͻÿ�: ");
	scanf_s("%d", &manu);
	printf("���귮: %d\n", manu);

	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &stars);
	printf("���� ����: %e\n", stars);

	printf("���ڸ� �Է��Ͻÿ�: ");

	getchar();
	word = getchar();

	printf("����: %c", word);

	return 0;
}