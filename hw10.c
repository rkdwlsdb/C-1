#include <stdio.h>
#include <string.h>

typedef struct cities
{
  char name[100];
  char country[100];
  int population;
} Cities;

int main(void)
{
  Cities arr[3];
  int idx=1;
  
  printf("Input three cities: \n");
  for(int i=0; i<3; i++)
  {
    printf("Name > ");
    fgets(arr[i].name, sizeof(arr[i].name), stdin);
    // printf("%s", arr[i].name);
    arr[i].name[strlen(arr[i].name)-1]=0;
    // printf("%s", arr[i].name);
    
    printf("Country > ");
    fgets(arr[i].country, sizeof(arr[i].country), stdin);
    arr[i].country[strlen(arr[i].country)-1]=0;
    
    printf("Population > ");
    scanf("%d", &arr[i].population);
    while(getchar()!='\n');
  }

  printf("\n");
  printf("Printing the three cities: \n");
  for(int i=0; i<3; i++)
  {
    printf("%d. %s in %s with a population of %d people\n", idx, arr[i].name, arr[i].country, arr[i].population);   
    idx++;
  }
  return 0;
}