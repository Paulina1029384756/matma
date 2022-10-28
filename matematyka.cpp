bool czyNieliczna(int liczba) {
  bool ostatni = false;
  int p = 1;
  for (int i = 0; i <= sizeof(liczba) * 8; i++, p *= 2) {
    bool aktualny = liczba & p;
    if (ostatni && aktualny)
      return false;
    ostatni = aktualny;
  }
  return true;
}

bool sumujKwadratyCyfr(int a) {
  while (a != 1 && a != 4) {
    int s = 0;
    while (a > 0) {
      int c = a % 10;
      s += c * c;
      a /= 10;
    }
    a = s;
  }
  return true;
}

bool czyParzysta(int a) {
  if(a % 2 == 1)
    return false;

    if (a % 2 == 0) {
      return true;
}
}




