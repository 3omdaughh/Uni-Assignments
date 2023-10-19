# Triple DES Encrypting method
from pyDes import *

file1 = open("MyFile.txt", "r").read()
print(file1)


def encrypt():
    data = file1
    k = des("DESCRYPT", CBC, "\0\0\0\0\0\0\0\0", pad=None, padmode=PAD_PKCS5)
    d = k.encrypt(data)
    return d


with open('MyFile-encrypted.txt', 'w') as f:
    f.writelines(str(encrypt()))


# un comment it if u want to decrypt!
"""
def decrypt():
    data = encrypt()
    k = triple_des("DESCRYPTDESCRYPT", CBC, "\0\0\0\0\0\0\0\0", pad=None, padmode=PAD_PKCS5)
    d = k.decrypt(data)
    return d


with open('MyFile-decrypted.txt', 'w') as f:
    f.writelines(str(decrypt()))"""
