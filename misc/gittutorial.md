# Git for your assignment

I highly recommend using git for your assignment, because I have seen so many cases of accidental deletion of code, with no backups. Please, please, please learn to use git, the amount you need to know is so small, anyone can learn it.

## Using GitHub
Yeah, just follow the instructions to create a repo, make sure you have a student account so you can make a private repo. If you can't, try BitBucket or GitLab.

## Cloning the Repo
Once you've made a new repo, clone it with
```
git clone [the url you get from github]
```

And you'll see that theres a fresh new repo on your local machine. `cd` into the new folder and start writing~

## Commiting changes
When you've made a change, even the most minor change, you want to commit that change. So first, lets see if we have any unstaged changes
```
git status
```
Here, you can see any changes that you have made that are not commited yet. To commit them you
```
git add [path to file]
git commit -m [commit message]
```
Make sure your commit messages make sense. Now you need to `push` your changes.
```
git push -u origin master
```

## Seeing your history
You can view all your commits with 
```
git log
```

## Going back in time
You can do two things here, you can `reset` or you can `revert`. Resetting is not recommended, as it will actually delete your history, and you will lose content. Instead, you should `revert`, which will make a new commit that undo's the commits you don't want. 
```
git revert [commit hash]
```
To get the commit hash, use `git log`. It's the random string of numbers and letters (well, not really random). 

## Ending Notes
Remember, this is the absolute fundamental basics  of `git`. There is so much more to `git`, but I'm sure that the above info is all you need to get by. As long as you really don't collasly fuck up.

If this is too confusing, feel free to just use DropBox to store your code at different revisions. Or take pictures of it. Or hand-write them. That was a joke. Please don't do any of that.
