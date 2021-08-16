import urllib.request
import os
import time
import json

def getFile(url, file_name):
    u = urllib.request.urlopen(url)
    f = open(file_name, 'wb')

    block_sz = 8192
    while True:
        buffer = u.read(block_sz)
        if not buffer:
            break

        f.write(buffer)
    f.close()
    print ("Sucessful to download" + " " + file_name)


bili_emote_api = "https://api.bilibili.com/x/emote/user/panel/web?business=reply"
resp = urllib.request.urlopen(bili_emote_api)
emote_json = resp.read().decode('utf-8')
emote = json.loads(emote_json)

output_dir = time.strftime("bili_%Y%m%d_%H%M%S",time.localtime())

for pkg in emote["data"]["packages"]:
    print(pkg["text"])	
    for em in pkg["emote"]:
        print(em["text"])
        if em["url"].find("http") >= 0:

            dirs = output_dir + "\\" + pkg["text"]
            if not os.path.exists(dirs):
                os.makedirs( dirs);

            getFile(em["url"], dirs + "\\" + em["text"] + ".png")
                 



    
