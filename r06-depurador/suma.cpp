int suma(const int v[], int n) { // A
    int s = 0;
    for (int i = 0; i < n; i++)
        s += v[i];
    return s;
}

int main(){
    int v[2] = {2, 4};
    suma(v, 2);
}