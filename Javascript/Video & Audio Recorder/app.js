const mediaSelector = document.getElementById("media");
let selectedMedia = null;
  
mediaSelector.addEventListener("change", (e) => {
    selectedMedia = e.target.value;
    document.getElementById(
      `${selectedMedia}-recorder`).style.display = "block";
    document.getElementById(
      `${otherRecorder(selectedMedia)}-recorder`)
      .style.display = "none";
});
  
function otherRecorder(selectedMedia) {
    return selectedMedia === "vid" ? "aud" : "vid";
}