import sys
import os
import time
import hashlib
import shutil

k=1024
m=1024*1024

if __name__ == '__main__':

    filelist = []

    srcdir = "E:\\CloudMusic\\"

    outdir = time.strftime("m_%Y%m%d\\",time.localtime())

    info = outdir + 'info.txt'

    

    for file in os.listdir(srcdir):
        
        rawfile = srcdir + file

        if os.path.getsize(rawfile) > 6*m:
            continue

        print(rawfile)
    
        with open(rawfile, 'rb') as fp:
            data = fp.read()
        file_md5= hashlib.md5(data).hexdigest()

        print(file_md5)

        filelist.append([file_md5, file])

        if not os.path.exists(outdir):
            os.makedirs(outdir)

        shutil.copy(rawfile, outdir + file_md5 + ".mp3")
   
    f = open(info, "w", encoding='utf-8')
    f.write(str(filelist))
    f.close()

     
