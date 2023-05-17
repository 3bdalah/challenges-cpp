.PHONY: clean All

All:
	@echo "----------Building project:[ A_Vanya_and_Fence - Debug ]----------"
	@cd "A_Vanya_and_Fence" && "$(MAKE)" -f  "A_Vanya_and_Fence.mk"
clean:
	@echo "----------Cleaning project:[ A_Vanya_and_Fence - Debug ]----------"
	@cd "A_Vanya_and_Fence" && "$(MAKE)" -f  "A_Vanya_and_Fence.mk" clean
