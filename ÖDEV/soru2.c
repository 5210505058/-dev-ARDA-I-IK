#include <stdio.h>

int linear_search(int arr[], int n) {
int min_element = arr[0];
for (int i = 1; i < n; i++) {// dongu n - 1 kere tekrarlandigi icin islem degeri =  n - 1
if (arr[i] < min_element) {//islem degeri = 1
min_element = arr[i];//islem degeri = 1
    
}
}
return min_element;//islem degeri 1
}

int main() {
int arr[] = {3, 6, 5, 9, 2};
int n = sizeof(arr) / sizeof(arr[0]);// 2 operasyon (sizeof ve bölme)
int min = linear_search(arr, n);// atama oldugu icin islem degeri = 1
printf("Min eleman %d", min);
return 0;
}
/*
  len(arr) islemi, listenin uzunlugunu almak icin O(1) zaman alir.

  min_element degiskenine ilk eleman atama islemi, O(1) zaman alir.

  for dongusu, n - 1 kez calisir. Dolayisiyla, for dongusunun karmasikligi T(n) = n'dir.

  if blogu, bir karsilastirma islemi icerir ve bu islem O(1) zamanda tamamlanir. Bu nedenle, if blogunun karmasikligi T(n) = 1'dir.

  min_element degiskeninin degeri, O(1) zamanda guncellenir.

  return ifadesi, O(1) zamanda tamamlanir.

  Dolayisiyla, toplam zaman karmasikligi T(n) = n * 1 = n'dir.

  Sonuc olarak, bu linear search algoritmasi kullanarak yazilan linear_search fonksiyonunun zaman karmasikligi, O(n) veya T(n) = n'dir.

  (linear search)
  sonuc:
  Durum/Zaman Karmasikligi
  Best Case    O(1)
  Average Case    O(n)
  Worst Case    O(n)

  */
