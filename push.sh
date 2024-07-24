date=$(date +"%m/%d %H:%M") 
#check whether cron is working properly
echo "foobar" >> /home/clear/blah.txt

git add /home/clear/projects/textbook
git commit -m "$date" 
git push -u origin main
