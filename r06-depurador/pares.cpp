int pares(const int v[], int n) { // B
    int c = 0;
    for (int i = 0; i < n; i++)
        if (v[i] % 2 == 0) c++;
    return c;
}

int main(){
    int v[2] = {2, 4};
    pares(v, 2);
}