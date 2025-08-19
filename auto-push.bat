@echo off
cd /d V:\git-dsa

:: Add all changes
git add .

:: Commit with custom message (Vruttant's PC + date & time)
git commit -m "Committed from Vruttant's PC on %date% %time%"

:: Pull remote changes before push
git pull origin main --rebase

:: Push to GitHub
git push origin main
