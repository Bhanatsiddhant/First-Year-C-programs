document.addEventListener('DOMContentLoaded', function() {
    const postText = document.getElementById('post-text');
    const postButton = document.getElementById('post-button');
    const postFeed = document.getElementById('post-feed');

    postButton.addEventListener('click', function() {
        const text = postText.value;
        if (text.trim() !== '') {
            const postElement = document.createElement('div');
            postElement.classList.add('post');
            postElement.textContent = text;
            postFeed.appendChild(postElement);
            postText.value = '';
        }
    });
});