local prefix = 'p'
admin1 = 'hwaileyy'


function GetPlayer(String)
        local plr
        local strl = String:lower()
        for i, v in pairs(game:GetService("Players"):GetPlayers()) do
            if v.Name:lower():sub(1, #String) == String:lower() then
                plr = v
            end 
        end
        if String == "me" then
            plr = game.Players.LocalPlayer
        end
        if String == "" or String == " " then
            plr = nil
        end
        return plr
    end










local admin1plr = game.Players[admin1]
admin1plr.Chatted:connect(function(msg)
    local splitmsg = msg:split(' ')
    if msg == prefix.."bring" or msg == prefix.."bring " then
        game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = admin1plr.Character.HumanoidRootPart.CFrame * CFrame.new(0,0,-3)
    elseif msg == prefix.."salad" then
        game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = CFrame.new(-86.9346, 22.6983, -632.601)
        wait(0.2)
        fireclickdetector(game:GetService("Workspace").Ignored.Shop["[Lettuce] - $5"].ClickDetector,10)
        wait(0.2)
        game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = admin1plr.Character.HumanoidRootPart.CFrame * CFrame.new(0,0,-3)
        wait(0.3)
        game:GetService'Players'.LocalPlayer.Character:FindFirstChildOfClass'Humanoid':UnequipTools()
        if game.Players.LocalPlayer.Backpack:FindFirstChild("[Lettuce]") then
        game.Players.LocalPlayer.Backpack:FindFirstChild("[Lettuce]").Parent = game.Players.LocalPlayer.Character
        end
        wait(0.4)
        local VIM = game:GetService("VirtualInputManager")
        VIM:SendMouseButtonEvent(315, 558, 0, false, game, 0)
        VIM:SendMouseButtonEvent(315, 558, 0, true, game, 0)
    elseif msg == prefix.."backflip" then
        local ca = game:GetService("ContextActionService")
        local zeezy = game:GetService("Players").LocalPlayer
        local h = 0.0174533
        		zeezy.Character.Humanoid:ChangeState("Jumping")
		wait()
		zeezy.Character.Humanoid.Sit = true
		for i = 1,360 do
			delay(i/720,function()
			zeezy.Character.Humanoid.Sit = true
				zeezy.Character.HumanoidRootPart.CFrame = zeezy.Character.HumanoidRootPart.CFrame * CFrame.Angles(h,0,0)
			end)
		end
		wait(0.55)
		zeezy.Character.Humanoid.Sit = false
    elseif msg == prefix.."frontflip" then
        local ca = game:GetService("ContextActionService")
        local zeezy = game:GetService("Players").LocalPlayer
        local h = 0.0174533
        		zeezy.Character.Humanoid:ChangeState("Jumping")
		wait()
		zeezy.Character.Humanoid.Sit = true
		for i = 1,360 do 
			delay(i/720,function()
			zeezy.Character.Humanoid.Sit = true
				zeezy.Character.HumanoidRootPart.CFrame = zeezy.Character.HumanoidRootPart.CFrame * CFrame.Angles(-h,0,0)
			end)
		end
		wait(0.55)
		zeezy.Character.Humanoid.Sit = false
    elseif msg == prefix.."kick" then
	    game.Players.LocalPlayer:Kick()
    elseif msg:sub(1,4) == prefix.."eon" then
           local pl = GetPlayer(msg:sub(6))
           local bruh = pl.Name
           game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = CFrame.new(-279.741, 22.4019, -236.918)
           wait(0.2)
           fireclickdetector(game:GetService("Workspace").Ignored.Shop["[Knife] - $150"].ClickDetector)
           game:GetService'Players'.LocalPlayer.Character:FindFirstChildOfClass'Humanoid':UnequipTools()
           wait(0.2)
           game.Players.LocalPlayer.Backpack["[Knife]"].Handle.Size = Vector3.new(50, 50, 50)
           wait(0.2)
           game.Players.LocalPlayer.Backpack:FindFirstChild("[Knife]").Parent = game.Players.LocalPlayer.Character
           wait(0.2)
        getgenv().bring = false
                    local loopFunction = function()
                        if game.Players:FindFirstChild(bruh).Character then
                            game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = game.Players[bruh].Character.HumanoidRootPart.CFrame * CFrame.new(0,-7,0)
                            game.Players.LocalPlayer.Character["[Knife]"]:Activate()
                            if game.Players[bruh].Character.Humanoid.Health <= 5 then
                                getgenv().bring = true
                                game:GetService'Players'.LocalPlayer.Character:FindFirstChildOfClass'Humanoid':UnequipTools()
                            end
                        else
                            getgenv().bring = true
                        end
                    end;        
                    local Loop
                    local Start = function()
                        Loop = game:GetService("RunService").Heartbeat:Connect(loopFunction);
                    end;         
                    local Pause = function()
                        Loop:Disconnect()
                    end;
                    Start()
                    repeat wait() until getgenv().bring == true
                    Pause()


                    if game.Players[bruh].Character.Humanoid.Health <= 5 then
                        while true do
                            game.Players.LocalPlayer.Character:MoveTo(game.Players[bruh].Character.UpperTorso.Position)
                            game.ReplicatedStorage.MainEvent:FireServer("Grabbing")
                            wait(0.5)
                            if game.Players.LocalPlayer.Character.BodyEffects.Grabbed.Value ~= nil then
                                break
                            end
                        end
                        game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = admin1plr.Character.HumanoidRootPart.CFrame
                        wait(1)
                        game.ReplicatedStorage.MainEvent:FireServer("Grabbing")
                        wait(1)
                        game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame=CFrame.new(d)
                        wait(.1)
                        game.Players.LocalPlayer.Character.HumanoidRootPart.Anchored = true
                    end
        
    elseif msg == prefix.."leng" then
        local hotdog = game.Workspace.Ignored.Shop["[HotDog] - $8"]
local burger = game.Workspace.Ignored.Shop["[Hamburger] - $5"]
        game.Players.LocalPlayer.Character:MoveTo(burger.Head.Position)
        wait(0.20)
        fireclickdetector(burger.ClickDetector,4)
        wait(0.20)
        game.Players.LocalPlayer.Backpack["[Hamburger]"].Parent = game.Players.LocalPlayer.Character
        wait(1)
        
        game.Players.LocalPlayer.Character:MoveTo(burger.Head.Position)
        wait(0.20)
        fireclickdetector(burger.ClickDetector,4)
        wait(0.2)
        game.Players.LocalPlayer.Character["[Hamburger]"].Parent = game.Players.LocalPlayer.Backpack
        wait(1)
        
        game.Players.LocalPlayer.Character:MoveTo(hotdog.Head.Position)
        wait(0.20)
        fireclickdetector(hotdog.ClickDetector,4)
        wait(1)
        if burger and hotdog then
            wait()
game.Players.LocalPlayer.Backpack["[HotDog]"].GripPos     = Vector3.new(0, -1.5, 1)
game.Players.LocalPlayer.Backpack["[HotDog]"].GripForward     = Vector3.new(-3, -3, -1)
game.Players.LocalPlayer.Backpack["[HotDog]"].GripRight     = Vector3.new(-0, -5, 1)
game.Players.LocalPlayer.Backpack["[HotDog]"].GripUp     = Vector3.new(2, 0, 75)
game.Players.LocalPlayer.Backpack["[Hamburger]"].GripPos     = Vector3.new(1.5, -2, -1)
game.Players.LocalPlayer.Backpack["[Hamburger]"].GripForward     = Vector3.new(0, 0, 0)
game.Players.LocalPlayer.Backpack["[Hamburger]"].GripRight     = Vector3.new(0, 0, 0)
game.Players.LocalPlayer.Backpack["[Hamburger]"].GripUp     = Vector3.new(0, 0, 0)
game.Players.LocalPlayer.Backpack["[Hamburger]"].Parent = game.Players.LocalPlayer.Character
game.Players.LocalPlayer.Backpack["[Hamburger]"].GripPos     = Vector3.new(1.5, -1, -1)
game.Players.LocalPlayer.Backpack["[Hamburger]"].GripForward     = Vector3.new(0, 0, 0)
game.Players.LocalPlayer.Backpack["[Hamburger]"].GripRight     = Vector3.new(0, 0, 0)
game.Players.LocalPlayer.Backpack["[Hamburger]"].GripUp     = Vector3.new(0, 0, 0)
game.Players.LocalPlayer.Backpack["[Hamburger]"].Parent = game.Players.LocalPlayer.Character
game.Players.LocalPlayer.Backpack["[HotDog]"].Parent = game.Players.LocalPlayer.Character
end
elseif msg == prefix.."freeze" then
    game.Players.LocalPlayer.Character.HumanoidRootPart.Anchored = true
elseif msg == prefix.."thaw" then
    game.Players.LocalPlayer.Character.HumanoidRootPart.Anchored = false
    end
end)


------------------------------------------------------------------------    
    local oldnamecall
oldnamecall = hookmetamethod(game, "__namecall", newcclosure(function(self, ...)
    local args = {...}
    if not checkcaller() and self == REMOTE and getnamecallmethod() == "FireServer" and args[1] == "TeleportDetect" then
        return wait(9e9)
    end
    return oldnamecall(self, ...)
end))

            for _, v in pairs(game.Players.LocalPlayer.Character:GetChildren()) do
                if v:IsA("Script") and v.Name ~= "Health" and v.Name ~= "Sound" and v:FindFirstChild("LocalScript") then
                    v:Destroy()
                end
            end
            game.Players.LocalPlayer.CharacterAdded:Connect(function(char)
                repeat
                    wait()
                until game.Players.LocalPlayer.Character
                char.ChildAdded:Connect(function(child)
                    if child:IsA("Script") then 
                        wait(0.1)
                        if child:FindFirstChild("LocalScript") then
                            child.LocalScript:FireServer()
                        end
                    end
                end)
            end)
            
            game.Players.LocalPlayer.CharacterAdded:Connect(function()
    wait(3)
            for _, v in pairs(game.Players.LocalPlayer.Character:GetChildren()) do
                if v:IsA("Script") and v.Name ~= "Health" and v.Name ~= "Sound" and v:FindFirstChild("LocalScript") then
                    v:Destroy()
                end
            end
            game.Players.LocalPlayer.CharacterAdded:Connect(function(char)
                repeat
                    wait()
                until game.Players.LocalPlayer.Character
                char.ChildAdded:Connect(function(child)
                    if child:IsA("Script") then 
                        wait(0.1)
                        if child:FindFirstChild("LocalScript") then
                            child.LocalScript:FireServer()
                        end
                    end
                end)
            end)
end)

local oldnamecall
oldnamecall = hookmetamethod(game, "__namecall", newcclosure(function(self, ...)
    local args = {...}
    if not checkcaller() and self == REMOTE and getnamecallmethod() == "FireServer" and args[1] == "TeleportDetect" then
        return wait(9e9)
    end
    return oldnamecall(self, ...)
end))
