# Git for your assignment

# This is all UNOFFICIAL ADVICE! Follow this at your own risk, don't expect help from staff for this. But I'm sure they will try their best if you ask politely.

I highly recommend using git for your assignment, because I have seen so many cases of accidental deletion of code, with no backups. Please, please, please learn to use git, the amount you need to know is so small, anyone can learn it.

## Using GitHub
Yeah, just follow the instructions to create a repo, make sure you have a student account so you can make a private repo. If you can't, try BitBucket or GitLab.

## Basic Idea

The way github works is that you have 2 areas where your code can be

1. Your local system
2. The github servers

When you edit your local version you can `commit` your changes periodcally which is similar to copying your code at regular intervals into folders called `backup1` and `backup2`

This is useful cause you can back up if you ever want to go back to a previous version of code. Of course this isn't useful if your hard drive crashes or you need to share the code with a partner. That is when you `push` your code. This takes all of your commits and pushes them to the github server. 

That server version can then be `pulled` by a partner so they can see / edit what you are doing and in the same way your partner can push changes to the server that you can then pull onto your local system to work with. 

Commiting you can do whenever, such as on a train, Pushing requires a internet connection so it can connect with the github servers. 

## Creating the Repo
A repo (short for repository) is just a online collection of your code, you can clone this code, edit it and then `push` those changes to the online version. It's similar to Google Drive or Dropbox but Git tracks every change you make.
This allows you to quickly revert a change you made, or branch off with new experimental features you aren't too sure about.

To create a repo you need to make a GitHub (/BitBucket/GitLab) account and then on the homepage find the large button saying "create a new repo". 
It will ask you to name the repo and if you want a README file. Continue with the prompts, you can add a README at this stage if you want.
 
Once done GitHub will give you a link, something like `https://github.com/username/---.git`. Copy this. 

## Cloning the Repo
Once you've made a new repo, `cd` into some directory where you want the code to be and clone it with the following command

```
git clone [the url you get from github]
```

And you'll see that theres a new folder on your local machine with just the readme file in it. `cd` into the new folder and start writing~

## Commiting changes
When you've made a change or added some files, even the most minor change, you want to commit that change. The more often you commit and push your changes the more points you have to revert back to when things go wrong. you want to push often so any issue doesn't set you back too far. 

So first, lets see if we have any unstaged changes
```
git status
```
Here, you can see any changes that you have made that are not commited yet. To commit them you

```
git add [path to file]
git commit -m [commit message]
```
Make sure your commit messages make sense. A ususal message may be something like 
```
git add my_code.c
git commit -m"fixed the bug in the code that caused it to spit out garbage"
```
Now you need to `push` your changes so the remote/online version of your code gets updated.
```
git push -u origin master
```

## Seeing your history
You can view all your commits with 
```
git log
```

## Going back in time
Hopefully you never have to do this but if your code suddenly breaks badly it is sometimes a good idea to revert back to when it was working then rebuilt it up. 
This is also useful if the code breaks close to the deadline. In this case reverting back to something that partially works and submitting that is better then submitting code that doesn't work at all. 

You can do two things here, you can `reset` or you can `revert`. Resetting is not recommended, as it will actually delete your history, and you will lose content. Instead, you should `revert`, which will make a new commit that undo's the commits you don't want. 
```
git revert [commit hash]
```
To get the commit hash, use `git log`. It's the random string of numbers and letters (well, not really random). 

## Typical use case

Lets say that I have some file called `code.c`, which is meant to print out the number 37. I go ahead and write down the following:

```c
#include <stdlib.h>

int main(){
  int x = 37;
  printf("%d", x);
}
```

Now that I've made a change, I should commit that change.

```
git add code.c
git commit -m "i wrote the code!"
git push -u origin master
```

Now, I realise I want my user to pick whatever number they want to print out. So I need to add some new functionality.

```c
#include <stdlib.h>

int main(){
  int x;
  scanf("%d", &x);
  printf("%d", x);
}

```
Now that I've added my new functionality, I now need to commit the new change.
```
git add code.c
git commit -m "Add ability to enter number"
git push -u origin master
```

And thats it.

Now lets say i am another person on this repo who wants to get all of these awesome codes that have been pushed into the repo. 
All i need to do is go into the folder where the code is and say 

```
git pull
```

This `pulls` the most recent version of the code on github onto the local system. 
Of course if you have written some code and then try to pull, github will try and `merge` these changes. If you are working on different things this usually goes without a hitch. If you both have different versions of the same bit of code though you have a `clash`.
This is a bit more involved to clean up but basically involves the person who is pulling to first decide which parts of the two versions (their own and the version on github) to keep. Googling `merge conflicts` will bring up some helpful articles on possible ways to handle this. 

## Ending Notes
Remember, this is the absolute fundamental basics  of `git`. There is so much more to `git`, but I'm sure that the above info is all you need to get by. As long as you really don't collasly fuck up.

If this is too confusing, feel free to just use DropBox to store your code at different revisions. Or take pictures of it. Or hand-write them. That was a joke. Please don't do any of that.
