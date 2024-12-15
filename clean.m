% Delete all auto-created folders and files
clear all
clear mex

% Delete output dir
disp('Deleting output directory...')
outpDir = [pwd '\output'];
if exist(outpDir, 'dir')
    system(['rmdir /s /q ' outpDir]);
end

% Delete all autosave-files
autosaveFiles = dir(fullfile(pwd, '**', '*.asv'));
for k = 1:length(autosaveFiles)
    disp(['### Deleting autosave file: ' fullfile(autosaveFiles(k).folder, autosaveFiles(k).name)])
    delete(fullfile(autosaveFiles(k).folder, autosaveFiles(k).name));
end

% Delete all autosave-files
autosaveFiles = dir(fullfile(pwd, '**', '*.autosave'));
for k = 1:length(autosaveFiles)
    disp(['### Deleting autosave file: ' fullfile(autosaveFiles(k).folder, autosaveFiles(k).name)])
    delete(fullfile(autosaveFiles(k).folder, autosaveFiles(k).name));
end