int main() {
int t,n,x;//total test case
scanf("%d",&t);
while(t>0){
    scanf("%d",&n);
    scanf("%d",&x);
    if(n%2==0||x%2==1)
    printf("yes");
    else
    printf("no");
    t--;
}
return 0;
}