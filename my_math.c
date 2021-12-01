
void mat1(arr[10][10]){
for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        printf("Enter Mat values");
        scanf(" %i", &arr[i][j]);
        }
    }
}

bool mat2(int arr[10][10]){
ptinrf("Enter two Points");
int x = scanf(" %i", &x);
int y = scanf(" %i", &y);
return (arr[x][y] != 0);
}

int mat3(int arr[10][10]){
ptinrf("Enter two Points");
int dist[10][10];
  for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            dist[i][j] = arr[i][j];
        } 
    }
int x = scanf(" %i", &x);
int y = scanf(" %i", &y);
for(int k = 0; k < 10; k++){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(dist[i][j] > dist[i][k] + dist[k][j])
                dist[i][j] =  dist[i][k] + dist[k][j];
             }
        }
    }
}