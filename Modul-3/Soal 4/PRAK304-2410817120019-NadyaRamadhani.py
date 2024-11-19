nilai = int(input())

if nilai == 0:
    print("nol")
elif nilai > 0 and nilai < 10:
    print("satuan")
elif nilai > 10 and nilai < 20:
    print("belasan")
elif nilai == 10 or nilai >= 20 and nilai < 100:
    print("puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")