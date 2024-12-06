% Runs the cmd in the base- and the caller workspace
function runInBaseAndCallerWorkspace(cmd)

    evalin('caller', [cmd ';']);
    evalin('base', [cmd ';']);

end
