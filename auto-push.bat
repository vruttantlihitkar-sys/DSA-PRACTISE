cd /d V:\git-dsa
git add .
git commit -m "Auto update %date% %time%"
git pull origin main --rebase
git push origin main
