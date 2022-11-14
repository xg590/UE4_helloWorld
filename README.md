### Unreal Engine 4 Hello World
* This is a "Hello World" example for Unreal Engine 4
* I configure this project for Meta Quest 2, so I can use motioncontroller to jump and change the view angle.
* Clone this project and play it by double-clicking the "helloWorld.uproject" 

### The section is for my self. I have a interal git server so I take this note.
```shell
$ mkdir -p ~/xg590/UE4_helloWorld.git
$ cd ~/xg590/UE4_helloWorld.git
$ git init --bare

$ git remote -v
origin  git@myGitServ:xg590/UE4_helloWorld.git (fetch) 
 
$ git branch
* master
 
$ git push origin master 

$ git remote add ext_origin git@github.com:xg590/UE4_helloWorld.git
$ git push ext_origin master

$ git clone git@myGitServ:xg590/UE4_helloWorld.git 
```
