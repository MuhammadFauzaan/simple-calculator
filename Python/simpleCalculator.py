print('KALKULATOR SEDERHANA')
print(' 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian')

inputUser = int(input('Pilih Operasi Matematika = '))
print('\n')

a = int(input('masukkan angka pertama = '))
b = int(input('masukkan angka kedua = '))

if inputUser == 1:
    print('Hasil = ',a + b)
elif inputUser == 2:
    print('Hasil = ',a - b)
elif inputUser == 3:
    print('Hasil = ',a * b)
elif inputUser == 4:
    print('Hasil = ',a / b)
else:
    print('Tidak Ada Operasi Matematika')